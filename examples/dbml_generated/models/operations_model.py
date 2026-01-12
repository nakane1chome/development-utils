"""Operations model."""

from datetime import datetime
from sqlalchemy import Boolean, Column, DateTime, ForeignKey, Integer, String, Text, PrimaryKeyConstraint, UniqueConstraint
from sqlalchemy.orm import relationship

from ..base import Base


class Operations(Base):
    """Operation tracking simulation workflow."""

    __tablename__ = "operations"
    # Columns
    id = Column(String, primary_key=True, nullable=False)
    state = Column(String, nullable=False)
    state_counter = Column(Integer, nullable=False)
    created_at = Column(DateTime, nullable=False, default=datetime.utcnow)
    created_by_id = Column(String, ForeignKey("tasks.id"), nullable=False)
    assigned_to_id = Column(String, ForeignKey("hosts.id"), nullable=True)

    __table_args__ = (        UniqueConstraint("state", "state_counter"),    )
    # Relationships (1)
    assigned_to = relationship("Hosts", foreign_keys=[assigned_to_id], back_populates="operations")
    created_by = relationship("Tasks", foreign_keys=[created_by_id], back_populates="operations")

    # Relationships (2)

    # Relationships (3)

    # Relationships (4)
