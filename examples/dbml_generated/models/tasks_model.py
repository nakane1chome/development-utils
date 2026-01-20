"""Tasks model."""

from datetime import datetime
from sqlalchemy import Boolean, Column, DateTime, ForeignKey, Integer, String, Text, PrimaryKeyConstraint, UniqueConstraint
from sqlalchemy.orm import relationship

from ..base import Base


class Tasks(Base):
    """Tasks represent units of work."""

    __tablename__ = "tasks"
    # Columns
    id = Column(String, primary_key=True, nullable=False)
    created_at = Column(DateTime, nullable=False, default=datetime.utcnow)
    name = Column(String, nullable=True)
    status = Column(String, nullable=True)

    # Relationships (1)

    # Relationships (2)

    # Relationships (3)
    operations = relationship("Operations", back_populates="created_by")

    # Relationships (4)
